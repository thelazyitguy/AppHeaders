//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInnerTubeRequestService.h>

@class GIMMe, YTApiaryResourceParser;

@interface YTYPCPreparePurchaseService : YTBaseInnerTubeRequestService
{
    YTApiaryResourceParser *_resourceParser;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)makeRequestWithTransactionParams:(id)arg1 appStoreProductId:(id)arg2 productData:(id)arg3 innerTubeResponseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (id)init;

@end
