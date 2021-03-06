//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol AIWebViewDelegate;

@interface AICallContext : NSObject
{
    id <AIWebViewDelegate> _delegate;
    NSMutableDictionary *_overrideParams;
    NSMutableDictionary *_internalData;
    NSMutableDictionary *_additionalData;
    NSMutableDictionary *_metricData;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _errorBlock;
}

@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSMutableDictionary *metricData; // @synthesize metricData=_metricData;
@property(retain, nonatomic) NSMutableDictionary *additionalData; // @synthesize additionalData=_additionalData;
@property(readonly, nonatomic) NSMutableDictionary *internalData; // @synthesize internalData=_internalData;
@property(retain, nonatomic) NSMutableDictionary *overrideParams; // @synthesize overrideParams=_overrideParams;
@property(retain, nonatomic) id <AIWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1 parameters:(id)arg2;

@end

