//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSCopying;

@interface MLLRUDictionaryEntry : NSObject
{
    long long _pinCount;
    long long _cost;
    id _value;
    id <NSCopying> _key;
    MLLRUDictionaryEntry *_lessRecent;
    MLLRUDictionaryEntry *_moreRecent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MLLRUDictionaryEntry *moreRecent; // @synthesize moreRecent=_moreRecent;
@property(readonly, nonatomic) MLLRUDictionaryEntry *lessRecent; // @synthesize lessRecent=_lessRecent;
@property(readonly, nonatomic) id <NSCopying> key; // @synthesize key=_key;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) long long cost; // @synthesize cost=_cost;
- (void)linkBetweenLessRecent:(id)arg1 moreRecent:(id)arg2;
- (void)unlink;
- (void)unpin;
- (void)pin;
@property(readonly, nonatomic) _Bool pinned;
- (id)initWithKey:(id)arg1 value:(id)arg2;

@end
