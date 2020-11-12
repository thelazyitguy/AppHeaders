//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface AMAWebResponse : NSObject
{
    _Bool _shouldLog;
    NSData *_data;
    long long _statusCode;
}

@property(nonatomic) _Bool shouldLog; // @synthesize shouldLog=_shouldLog;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)getResponseReader;
- (_Bool)isHttpStatusCodeOK;
- (id)getHttpStatus;
- (long long)getHttpStatusCode;
- (id)initWithData:(id)arg1 withStatusCode:(long long)arg2 withLogging:(_Bool)arg3;

@end
