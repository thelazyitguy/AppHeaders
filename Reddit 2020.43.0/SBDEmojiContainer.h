//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SBDEmojiContainer : NSObject
{
    NSString *_emojiHash;
    NSArray *_categories;
    NSString *_hashValue;
}

@property(retain) NSString *hashValue; // @synthesize hashValue=_hashValue;
@property(retain) NSArray *categories; // @synthesize categories=_categories;
@property(readonly) NSString *emojiHash; // @synthesize emojiHash=_emojiHash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
