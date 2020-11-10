//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFCW444/ViewBinding.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface TextViewBinding : ViewBinding
{
    NSString *_metadataKey;
    UIView *_view;
    CDUnknownBlockType _formatter;
}

@property(readonly, nonatomic) CDUnknownBlockType formatter; // @synthesize formatter=_formatter;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, copy, nonatomic) NSString *metadataKey; // @synthesize metadataKey=_metadataKey;
- (void).cxx_destruct;
- (void)applyMetadata:(id)arg1;
- (id)initWithView:(id)arg1 metadataKey:(id)arg2 formatter:(CDUnknownBlockType)arg3;

@end

