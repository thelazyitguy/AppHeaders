//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LPSwizzle : NSObject
{
}

+ (_Bool)swizzleClassMethod:(SEL)arg1 withClassMethod:(SEL)arg2 error:(id *)arg3 class:(Class)arg4;
+ (_Bool)swizzleMethod:(SEL)arg1 withMethod:(SEL)arg2 error:(id *)arg3 class:(Class)arg4;
+ (CDUnknownFunctionPointerType)originalImplementationForInstanceMethod:(SEL)arg1 forClass:(Class)arg2;
+ (Class)originalImplementingClassForInstanceMethod:(SEL)arg1 forClass:(Class)arg2;
+ (_Bool)swizzleInstanceMethod:(SEL)arg1 forClass:(Class)arg2 withReplacementMethod:(CDUnknownFunctionPointerType)arg3;
+ (Class)implementingSuperclassForSelector:(SEL)arg1 onClass:(Class)arg2;
+ (_Bool)hookInto:(SEL)arg1 withSelector:(SEL)arg2 forObject:(id)arg3;

@end
