//
//  Screen4ViewController.h
//  Layovr
//
//  Created by Daniel Drescher on 03/06/16.
//  Copyright © 2016 griebel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Screen4ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *questionLabel;
@property (weak, nonatomic) IBOutlet CustomPlaceholderTextField *firstCityTF;
@property (weak, nonatomic) IBOutlet CustomPlaceholderTextField *secondCityTF;
@property (weak, nonatomic) IBOutlet CustomPlaceholderTextField *thirdCityTF;

@property (weak, nonatomic) IBOutlet UIButton *backButton;
@property (weak, nonatomic) IBOutlet UIButton *nextButton;
@property (weak, nonatomic) IBOutlet UIButton *skipButton;
@end
