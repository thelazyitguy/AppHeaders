//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol SXOnDeviceDebugOverlayViewDelegate;

@interface SXOnDeviceDebugOverlayView : UIView
{
    id <SXOnDeviceDebugOverlayViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SXOnDeviceDebugOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)findView:(out id *)arg1 atPoint:(struct CGPoint)arg2 fromParent:(id)arg3;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

