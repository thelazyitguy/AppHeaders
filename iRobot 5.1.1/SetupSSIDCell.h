//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface SetupSSIDCell : UITableViewCell
{
    UILabel *_ssidValueLabel;
    UILabel *_changeLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *changeLabel; // @synthesize changeLabel=_changeLabel;
@property(retain, nonatomic) UILabel *ssidValueLabel; // @synthesize ssidValueLabel=_ssidValueLabel;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (double)height;
- (void)awakeFromNib;

@end
