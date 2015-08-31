//
//  THEntryCell.h
//  Diary
//
//  Created by Dean Laurea on 8/31/15.
//  Copyright (c) 2015 Treehouse. All rights reserved.
//

#import <UIKit/UIKit.h>

@class THDiaryEntry;

@interface THEntryCell : UITableViewCell

+ (CGFloat)heightForEntry:(THDiaryEntry *)entry;

- (void)configureCellForEntry:(THDiaryEntry *)entry;

@end
