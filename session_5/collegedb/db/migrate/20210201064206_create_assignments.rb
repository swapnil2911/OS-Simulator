class CreateAssignments < ActiveRecord::Migration[6.1]
  def change
    create_table :assignments do |t|
      t.string :name
      t.datetime :submission_deadline
      t.integer :weightage
      t.integer :course_id

      t.timestamps
    end
  end
end
