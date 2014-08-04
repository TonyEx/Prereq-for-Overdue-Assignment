//
//  TEAViewController.h
//  Prereq for Overdue Assignment
//
//  Created by Tony Angelo on 8/3/14.
//  Copyright (c) 2014 Tony Angelo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TEAViewController : UIViewController <UITextViewDelegate>

@property (strong, nonatomic) IBOutlet UITextView *textView;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;
- (IBAction)processDateButtonPressed:(UIButton *)sender;

@end
