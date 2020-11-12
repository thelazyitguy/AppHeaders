//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, PaymentsTableDataSource, PaymentsTableDelegate, UILabel, UITableView;

@interface PaymentDetailsView : UIView
{
    UILabel *_totalLabel;
    UILabel *_totalValueLabel;
    UIView *_totalTopSeparator;
    UIView *_totalBottomSeparator;
    UITableView *_paymentsTableView;
    PaymentsTableDataSource *_paymentsTableDataSource;
    PaymentsTableDelegate *_paymentsTableDelegate;
    NSLayoutConstraint *_paymentsTableViewHeightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *paymentsTableViewHeightConstraint; // @synthesize paymentsTableViewHeightConstraint=_paymentsTableViewHeightConstraint;
@property(retain, nonatomic) PaymentsTableDelegate *paymentsTableDelegate; // @synthesize paymentsTableDelegate=_paymentsTableDelegate;
@property(retain, nonatomic) PaymentsTableDataSource *paymentsTableDataSource; // @synthesize paymentsTableDataSource=_paymentsTableDataSource;
@property(retain, nonatomic) UITableView *paymentsTableView; // @synthesize paymentsTableView=_paymentsTableView;
@property(retain, nonatomic) UIView *totalBottomSeparator; // @synthesize totalBottomSeparator=_totalBottomSeparator;
@property(retain, nonatomic) UIView *totalTopSeparator; // @synthesize totalTopSeparator=_totalTopSeparator;
@property(retain, nonatomic) UILabel *totalValueLabel; // @synthesize totalValueLabel=_totalValueLabel;
@property(retain, nonatomic) UILabel *totalLabel; // @synthesize totalLabel=_totalLabel;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
