//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CCAMessageExtension : NSObject
{
    _Bool _criticalityIndicator;
    NSString *_name;
    NSString *_meId;
    NSDictionary *_data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property _Bool criticalityIndicator; // @synthesize criticalityIndicator=_criticalityIndicator;
@property(retain, nonatomic) NSString *meId; // @synthesize meId=_meId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithJSON:(id)arg1;

@end

