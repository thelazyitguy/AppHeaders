//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSExport-Protocol.h"

@class JSValue;

@protocol GT3Call <JSExport>
- (JSValue *)gtNotify:(JSValue *)arg1;
- (void)gtCallBack:(JSValue *)arg1:(JSValue *)arg2:(JSValue *)arg3;
- (void)gtClose;
- (void)gtReady;
- (void)gt3Error:(JSValue *)arg1;
@end

