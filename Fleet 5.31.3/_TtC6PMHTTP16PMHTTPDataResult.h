//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PMHTTP/_TtC6PMHTTP12PMHTTPResult.h>

@class NSData;

@interface _TtC6PMHTTP16PMHTTPDataResult : _TtC6PMHTTP12PMHTTPResult
{
}

+ (id)canceledResult;
- (id)initWithValue:(id)arg1 response:(id)arg2;
- (id)initWithError:(id)arg1 response:(id)arg2;
- (id)initWithData:(id)arg1 response:(id)arg2;
@property(nonatomic, readonly) NSData *data;

@end
