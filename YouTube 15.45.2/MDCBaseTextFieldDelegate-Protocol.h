//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class MDCBaseTextField;

@protocol MDCBaseTextFieldDelegate <NSObject>

@optional
- (_Bool)baseTextField:(MDCBaseTextField *)arg1 shouldPerformAction:(SEL)arg2 withSender:(id)arg3 canPerformAction:(_Bool)arg4;
- (_Bool)baseTextFieldShouldDeleteBackward:(MDCBaseTextField *)arg1;
- (void)baseTextFieldDidDeleteBackward:(MDCBaseTextField *)arg1;
@end
