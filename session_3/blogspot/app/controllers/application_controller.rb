class ApplicationController < ActionController::Base
    helper_method :current_user
    rescue_from CanCan::AccessDenied do |exception|
      redirect_to root_url, notice: "Not authorised to #{exception.action} #{exception.subject}"
    end 

    def current_user
      if session[:user_id]
        @current_user ||= User.find(session[:user_id])
      else
        @current_user = nil 
      end 
    end 
end
