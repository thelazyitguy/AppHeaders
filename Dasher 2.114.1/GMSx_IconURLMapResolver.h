//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSServerResourceCollector, GMSServerResourceManager, GMSx_IconImageFactory, NSArray;
@protocol OS_dispatch_queue;

@interface GMSx_IconURLMapResolver : NSObject
{
    NSArray *_entries;
    NSArray *_iconTypes;
    GMSServerResourceManager *_resourceManager;
    GMSServerResourceCollector *_resourceCollector;
    GMSx_IconImageFactory *_imageFactory;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)iconURLsFromEntries:(id)arg1 iconTypes:(id)arg2;
+ (void)resolveIconURLMapEntries:(id)arg1 iconTypes:(id)arg2 resourceManager:(id)arg3 handlerQueue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (void)populateIconDictionary:(id)arg1 iconTypes:(id)arg2 resourceMap:(id)arg3;
- (void)startFetchingWithHandlerQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithIconURLMapEntries:(id)arg1 iconTypes:(id)arg2 resourceManager:(id)arg3 resourceCollector:(id)arg4 imageFactory:(id)arg5;

@end
