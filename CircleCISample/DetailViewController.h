//
//  DetailViewController.h
//  CircleCISample
//
//  Created by 小田 雄帆 on 2016/04/04.
//  Copyright © 2016年 JITAKUKEIBI INC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

