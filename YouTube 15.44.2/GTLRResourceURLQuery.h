//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GTLRQuery.h>

@class NSURL;

@interface GTLRResourceURLQuery : GTLRQuery
{
    NSURL *_resourceURL;
}

+ (id)queryWithResourceURL:(id)arg1 objectClass:(Class)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

