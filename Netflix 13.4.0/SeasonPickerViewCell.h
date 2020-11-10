//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor, UILabel, UIView;

@interface SeasonPickerViewCell : UITableViewCell
{
    _Bool _shouldForceDefaultTheme;
    UILabel *_selectedLabel;
    UILabel *_seasonLabel;
    UIView *_divider;
    UIView *_cellBackground;
    UIColor *_greyColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *greyColor; // @synthesize greyColor=_greyColor;
@property(nonatomic) _Bool shouldForceDefaultTheme; // @synthesize shouldForceDefaultTheme=_shouldForceDefaultTheme;
@property(retain, nonatomic) UIView *cellBackground; // @synthesize cellBackground=_cellBackground;
@property(retain, nonatomic) UIView *divider; // @synthesize divider=_divider;
@property(nonatomic) __weak UILabel *seasonLabel; // @synthesize seasonLabel=_seasonLabel;
@property(nonatomic) __weak UILabel *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
- (void)prepareForReuse;
- (void)setViewData:(id)arg1;

@end
