//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/FNWaterfallThumbsViewData-Protocol.h>
#import <Funny/IFModelProtocol-Protocol.h>

@class NSArray, NSString;
@protocol IFCoverListControllerProtocol;

@interface IFCoverModel : NSObject <FNWaterfallThumbsViewData, IFModelProtocol>
{
    NSObject<IFCoverListControllerProtocol> *_controller;
    NSArray *_covers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *covers; // @synthesize covers=_covers;
@property(nonatomic) __weak NSObject<IFCoverListControllerProtocol> *controller; // @synthesize controller=_controller;
- (void)loadCovers;
- (long long)waterfallIndexForRawIndex:(long long)arg1;
- (long long)rawIndexForWaterfallIndex:(long long)arg1;
- (id)itemForViewAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool hasNext;
@property(readonly, nonatomic) unsigned long long count;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
