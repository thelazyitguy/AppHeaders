//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface IBGVideoRecorderPopover : UIView
{
    _Bool _shouldFlip;
    UILabel *_pressRecordLabel;
    UIView *_containerView;
    UIView *_tipView;
}

@property(nonatomic) _Bool shouldFlip; // @synthesize shouldFlip=_shouldFlip;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *pressRecordLabel; // @synthesize pressRecordLabel=_pressRecordLabel;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithShouldflip:(_Bool)arg1;

@end
