//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterDisplayTextRange.h>

@class TFSTwitterTextRange;

@interface TFSTwitterDisplayTextEntityRange : TFSTwitterDisplayTextRange
{
    TFSTwitterTextRange *_textRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFSTwitterTextRange *textRange; // @synthesize textRange=_textRange;
- (id)displayString;
- (long long)rangeFlavor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)displayTextRangeWithRangeInDisplayText:(struct _NSRange)arg1;
- (id)initWithTextRange:(id)arg1;
- (id)initWithTextRange:(id)arg1 displayTextRange:(struct _NSRange)arg2;

@end

