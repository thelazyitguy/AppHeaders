//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface MPKitActivityMapping : NSObject
{
    NSNumber *_integrationId;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSNumber *integrationId; // @synthesize integrationId=_integrationId;
- (id)initWithKitCode:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
