//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, T1ToastAction, T1Toaster;
@protocol T1ToastViewModel;

@protocol T1ToasterContextDelegate <NSObject>

@optional
- (T1ToastAction *)toaster:(T1Toaster *)arg1 overrideAction:(T1ToastAction *)arg2 forToast:(id <T1ToastViewModel>)arg3;
- (_Bool)toaster:(T1Toaster *)arg1 canDisplayToast:(id <T1ToastViewModel>)arg2 withPriority:(unsigned long long)arg3;
- (NSString *)scribePageForToaster:(T1Toaster *)arg1;
@end
