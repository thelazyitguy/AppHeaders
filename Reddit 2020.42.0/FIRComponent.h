//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, Protocol;

@interface FIRComponent : NSObject
{
    Protocol *_protocol;
    long long _instantiationTiming;
    NSArray *_dependencies;
    CDUnknownBlockType _creationBlock;
}

+ (id)componentWithProtocol:(id)arg1 instantiationTiming:(long long)arg2 dependencies:(id)arg3 creationBlock:(CDUnknownBlockType)arg4;
+ (id)componentWithProtocol:(id)arg1 creationBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
@property(readonly, copy, nonatomic) NSArray *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly, nonatomic) long long instantiationTiming; // @synthesize instantiationTiming=_instantiationTiming;
@property(readonly, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
- (id)initWithProtocol:(id)arg1 instantiationTiming:(long long)arg2 dependencies:(id)arg3 creationBlock:(CDUnknownBlockType)arg4;

@end

