//
//  MRCRepoSettingsOwnerTableViewCell.h
//  MVVMReactiveCocoa
//
//  Created by leichunfeng on 15/5/15.
//  Copyright (c) 2015年 leichunfeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MRCRepoSettingsOwnerTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIButton *avatarButton;
@property (weak, nonatomic) IBOutlet UILabel *topTextLabel;
@property (weak, nonatomic) IBOutlet UILabel *bottomTextLabel;

@end
