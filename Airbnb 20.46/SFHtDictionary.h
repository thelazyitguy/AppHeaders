//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary;

@interface SFHtDictionary : NSObject <NSCoding>
{
    NSDictionary *_entryTypes;
    NSMutableDictionary *_entries;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *entries; // @synthesize entries=_entries;
@property(retain) NSDictionary *entryTypes; // @synthesize entryTypes=_entryTypes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)setEntry:(id)arg1 value:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEntryTypes:(id)arg1;

@end
