//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/RKObjectMappingMatcher.h>

@class NSArray;

@interface RKBlockObjectMatchingMatcher : RKObjectMappingMatcher
{
    NSArray *_possibleMappings;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) NSArray *possibleMappings; // @synthesize possibleMappings=_possibleMappings;
- (id)description;
- (_Bool)matches:(id)arg1;
- (id)possibleObjectMappings;
- (id)initWithPossibleMappings:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end
