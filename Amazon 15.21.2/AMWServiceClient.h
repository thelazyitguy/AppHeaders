//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLSession;

@interface AMWServiceClient : NSObject
{
    NSURLSession *_session;
    unsigned long long _maxNumberOfRetries;
    NSString *_clientIdentifier;
}

@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) unsigned long long maxNumberOfRetries; // @synthesize maxNumberOfRetries=_maxNumberOfRetries;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)invokeWithBaseUrl:(id)arg1 request:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)joinQueryItems:(id)arg1 withSeparator:(id)arg2;
- (_Bool)isServerError:(long long)arg1;
- (void)invokeWithRequest:(id)arg1 callback:(CDUnknownBlockType)arg2 numberOfRetries:(unsigned long long)arg3;
- (id)initWithMaxNumberOfRetries:(unsigned long long)arg1 clientIdentifier:(id)arg2;
- (id)init;

@end
