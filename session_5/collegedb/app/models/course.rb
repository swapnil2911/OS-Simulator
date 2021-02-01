class Course < ApplicationRecord
    has_many :registrations
    has_many :assignments
    has_many :students, through: :registrations
end
