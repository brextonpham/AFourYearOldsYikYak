//
//  SignUpViewController.h
//  AFourYearOldsYikYak
//
//  Created by Brexton Pham on 6/19/15.
//  Copyright (c) 2015 Brexton Pham. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignUpViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UITextField *emailField;


- (IBAction)signup:(id)sender;

@end
