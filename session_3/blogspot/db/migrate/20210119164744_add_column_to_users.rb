class AddColumnToUsers < ActiveRecord::Migration[6.1]
  def change
    add_column :users, :admin, :boolean, default: nil 
  end
end