//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BFComponentList : NSObject
{
}

+ (id)getDefaultComponent;
+ (id)getComponentAtIndex:(long long)arg1;
+ (long long)getComponentCount;
+ (id)moveToTopOfComponentList:(id)arg1 withComponentId:(id)arg2;
+ (id)lookupComponentWithConfig:(id)arg1;
+ (id)lookupComponentWithName:(id)arg1;
+ (id)lookupComponentNameWithConfig:(id)arg1;
+ (id)componentConsolidatedList;

@end

