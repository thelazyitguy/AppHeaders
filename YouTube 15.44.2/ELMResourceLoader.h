//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ELMResourceLoader : NSObject
{
    struct Handle<std::__1::shared_ptr<youtube::elements::interfaces::ResourceLoader>, std::__1::shared_ptr<youtube::elements::interfaces::ResourceLoader>> _cppRefHandle;
}

+ (id)createWithCache:(id)arg1 verifierProvider:(id)arg2 delegate:(id)arg3 strategyDelegate:(id)arg4 config:(id)arg5;
+ (id)create:(id)arg1 verifierProvider:(id)arg2 delegate:(id)arg3 maxTags:(int)arg4 maxBuildLabels:(int)arg5;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cacheResources;
- (id)commitCachedTrackableResources;
- (void)updateResourceStatus:(id)arg1;
- (id)getPreloader;
- (id)updateResources:(id)arg1 callback:(id)arg2;
- (id)handleResources:(id)arg1;
- (id)initWithCpp:(const shared_ptr_c6058fa0 *)arg1;

@end

