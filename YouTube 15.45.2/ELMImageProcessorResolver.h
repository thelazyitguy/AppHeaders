//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ELMImageProcessorResolver : NSObject
{
    struct unordered_map<int, id<ELMImageProcessor>(^)(NSData *), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id<ELMImageProcessor>(^)(NSData *)>>> _blocks;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: @32@0:8r^{ImageProcessor=^^?{InternalMetadata=^v}{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, proto2::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, proto2::internal::ExtensionSet::Extension> > >})}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}}16@24, name: resolveImageProcessor:context:
- (void)registerImageProcessorExtension:(int)arg1 handler:(CDUnknownBlockType)arg2;

@end
