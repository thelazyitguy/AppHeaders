//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UIView;

@interface GWALockingSheetScrollView : UIScrollView
{
    UIView *_contentView;
    double _heightFromTopToIgnorePan;
}

- (void).cxx_destruct;
@property(nonatomic) double heightFromTopToIgnorePan; // @synthesize heightFromTopToIgnorePan=_heightFromTopToIgnorePan;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

@end

