//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFSTwitterOnboardingRichText;

@interface TFSTwitterOnboardingRichTextQuantityPair : NSObject
{
    TFSTwitterOnboardingRichText *_text;
    long long _threshold;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long threshold; // @synthesize threshold=_threshold;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *text; // @synthesize text=_text;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end
