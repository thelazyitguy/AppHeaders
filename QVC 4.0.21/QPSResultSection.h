//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface QPSResultSection : NSObject
{
    _Bool _isProductSection;
    NSString *_name;
    NSArray *_sectionItems;
    long long _sectionDisplayOrder;
}

- (void).cxx_destruct;
@property(nonatomic) long long sectionDisplayOrder; // @synthesize sectionDisplayOrder=_sectionDisplayOrder;
@property(retain, nonatomic) NSArray *sectionItems; // @synthesize sectionItems=_sectionItems;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isProductSection; // @synthesize isProductSection=_isProductSection;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;

@end
