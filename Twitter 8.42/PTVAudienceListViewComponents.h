//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

@interface PTVAudienceListViewComponents : NSObject
{
    NSAttributedString *_text;
    NSAttributedString *_suffix;
    struct CGSize _textSize;
    struct CGSize _suffixSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *suffix; // @synthesize suffix=_suffix;
@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
@property(nonatomic) struct CGSize suffixSize; // @synthesize suffixSize=_suffixSize;
@property(nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;

@end

