//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SLKMentionPredicateCacheInterface-Protocol.h"

@class NSMutableDictionary;

@interface SLKMentionPredicateCache : NSObject <SLKMentionPredicateCacheInterface>
{
    NSMutableDictionary *_mentionPredicates;
    NSMutableDictionary *_mentionRegexes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mentionRegexes; // @synthesize mentionRegexes=_mentionRegexes;
@property(retain, nonatomic) NSMutableDictionary *mentionPredicates; // @synthesize mentionPredicates=_mentionPredicates;
- (id)mentionRegexesForUserId:(id)arg1 highlightWords:(id)arg2;
- (id)mentionPredicateForUserId:(id)arg1 keyToMatch:(id)arg2 canHaveAtChannelMentions:(_Bool)arg3 highlightWords:(id)arg4;
- (void)resetCache;
- (id)init;

@end
