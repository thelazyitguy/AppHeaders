//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGNetworkRequest.h>

@class NSArray, NSString;
@protocol IBGAnalyticsRequestDelegate;

@interface IBGAnalyticsRequest : IBGNetworkRequest
{
    id <IBGAnalyticsRequestDelegate> _delegate;
    NSString *_dataUrl;
    NSArray *_methodsLog;
    NSArray *_eventsLog;
}

@property(retain, nonatomic) NSArray *eventsLog; // @synthesize eventsLog=_eventsLog;
@property(retain, nonatomic) NSArray *methodsLog; // @synthesize methodsLog=_methodsLog;
@property(copy, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
@property(nonatomic) __weak id <IBGAnalyticsRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)JSONStringFromObject:(id)arg1;
- (void)networkDone:(id)arg1 URLSessionDataTask:(id)arg2 response:(id)arg3 error:(id)arg4 responseDictionary:(id)arg5;
- (id)requestCreator;
- (id)initWithMethodsLog:(id)arg1 eventsLog:(id)arg2 delegate:(id)arg3;

@end
