//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTApiaryParser-Protocol.h>

@class NSString;

@interface YTApiaryResourceParser : NSObject <YTApiaryParser>
{
    Class _protoClass;
}

- (id)parseFromData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) Class protoClass;
- (id)initWithProtoClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

