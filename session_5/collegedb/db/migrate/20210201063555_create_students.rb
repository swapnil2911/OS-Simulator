class CreateStudents < ActiveRecord::Migration[6.1]
  def change
    create_table :students do |t|
      t.string :name
      t.string :branch
      t.integer :admission_year
      t.string :email
      t.string :roll_number

      t.timestamps
    end
    add_index :students, :email, unique: true
  end
end
