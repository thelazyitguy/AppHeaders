//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GRWTransformerSource : NSObject
{
    NSArray *_instanceTransformers;
}

+ (void)removeTransformer:(id)arg1;
+ (void)addTransformer:(id)arg1;
+ (id)transformers;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *instanceTransformers; // @synthesize instanceTransformers=_instanceTransformers;
- (id)init;

@end

