//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TFSTwitterOnboardingRichText : NSObject
{
    NSString *_text;
    NSArray *_entities;
    long long _size;
    long long _style;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(readonly, nonatomic) NSString *unexpandedText; // @synthesize unexpandedText=_text;
- (id)expandedTextWithSubtaskDataProvider:(id)arg1;
- (id)expandedRichTextWithSubtaskDataProvider:(id)arg1;
- (id)initWithText:(id)arg1 entities:(id)arg2 size:(long long)arg3 style:(long long)arg4;
- (id)initWithText:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end
