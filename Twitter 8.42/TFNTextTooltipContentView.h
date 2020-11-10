//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TFNUI/TFNTooltipContentView-Protocol.h>

@class NSString, UIColor, UIFont, UILabel;

@interface TFNTextTooltipContentView : UIView <TFNTooltipContentView>
{
    _Bool _shouldCenterLabel;
    CDUnknownBlockType contentSizeChangedBlock;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool shouldCenterLabel; // @synthesize shouldCenterLabel=_shouldCenterLabel;
@property(copy, nonatomic) CDUnknownBlockType contentSizeChangedBlock; // @synthesize contentSizeChangedBlock;
- (struct CGSize)private_labelSizeThatFits:(struct CGSize)arg1;
- (void)tfn_fontSizeChanged;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIFont *labelFont;
@property(retain, nonatomic) UIColor *labelColor;
@property(copy, nonatomic) NSString *labelText;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
