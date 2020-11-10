//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSMutableArray;

@interface YTCaptionLineLabel : UILabel
{
    NSMutableArray *_lineRanges;
    _Bool _complete;
    unsigned long long _ID;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) unsigned long long ID; // @synthesize ID=_ID;
- (_Bool)isEmpty;
- (void)removeTextForCaptionID:(unsigned long long)arg1;
- (void)appendAttributedText:(id)arg1 captionID:(unsigned long long)arg2;
- (id)initWithID:(unsigned long long)arg1;

@end

