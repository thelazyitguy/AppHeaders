//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface ManageRemindersUpcomingShowsTableViewCell : UITableViewCell
{
    UILabel *_dateLabel;
    UILabel *_timeLabel;
}

+ (id)nib;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void)configureWithUpcomingShow:(id)arg1;
- (double)height:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

