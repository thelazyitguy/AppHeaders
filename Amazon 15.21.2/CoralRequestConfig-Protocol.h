//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;
@protocol CoralErrorHandler;

@protocol CoralRequestConfig
@property(copy, nonatomic) CDUnknownBlockType requestSigner;
@property(retain, nonatomic) id <CoralErrorHandler> globalErrorHandler;
@property(nonatomic) double timeoutInterval;
@property(nonatomic) unsigned long long maxRetries;
@property(copy, nonatomic) NSString *userAgent;
@end

