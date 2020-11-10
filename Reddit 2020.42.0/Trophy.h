//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface Trophy : NSObject
{
    NSString *_trophyId;
    NSString *_descriptionStr;
    NSString *_name;
    NSString *_icon70UrlString;
    NSURL *_linkURL;
    NSDate *_grantedAt;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *grantedAt; // @synthesize grantedAt=_grantedAt;
@property(readonly, nonatomic) NSURL *linkURL; // @synthesize linkURL=_linkURL;
@property(readonly, copy, nonatomic) NSString *icon70UrlString; // @synthesize icon70UrlString=_icon70UrlString;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *descriptionStr; // @synthesize descriptionStr=_descriptionStr;
@property(readonly, copy, nonatomic) NSString *trophyId; // @synthesize trophyId=_trophyId;
- (id)debugDescription;
- (id)initWithData:(id)arg1;

@end

