//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTIPaidContentOverlayRenderer;
@protocol YTPaidContentControllerDelegate;

@interface YTPaidContentController : NSObject
{
    YTIPaidContentOverlayRenderer *_paidContentRenderer;
    _Bool _hasShown;
    id <YTPaidContentControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTIPaidContentOverlayRenderer *paidContentRenderer; // @synthesize paidContentRenderer=_paidContentRenderer;
@property(nonatomic) __weak id <YTPaidContentControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playbackDidStart;
- (id)initWithPaidContentRenderer:(id)arg1;

@end
