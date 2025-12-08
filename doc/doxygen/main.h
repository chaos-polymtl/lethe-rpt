// SPDX-FileCopyrightText: Copyright (c) 2023-2024 The Lethe Authors
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception OR LGPL-2.1-or-later

/**
 * @mainpage
 *
 * An outline of the main classes in Lethe and how they interact is given by the
 following
 * clickable graph:
 *
 * @dot
 *    digraph main_classes {
      graph [bgcolor="transparent", align=true, ranksep=1.5];
      node [fontname="FreeSans",fontsize=15,
        shape=record,height=0.2,width=0.4,
        color="royalblue", fillcolor="white", style="filled"];
      edge [color="royalblue", weight=10];
      rankdir="LR";
      size = "16,10";

      rpt_solver_1 [label=<<B>RPT</B> <br/>(lethe-rpt-3d)>,
 href="https://chaos-polymtl.github.io/lethe/doxygen/classRPT.html",
 tooltip="RPT"]; rpt_solver_2 [label=<<B>RPTCellReconstruction</B>
 <br/>(lethe-rpt-cell-reconstruction-3d)>,
 href="https://chaos-polymtl.github.io/lethe/doxygen/classRPTCellReconstruction.html",
 tooltip="RPTCellReconstruction"]; rpt_solver_3
 [label=<<B>RPTFEMReconstruction</B> <br/>(lethe-rpt-fem-reconstruction-3d)>,
 href="https://chaos-polymtl.github.io/lethe/doxygen/classRPTFEMReconstruction.html",
 tooltip="RPTFEMReconstruction"]; rpt_solver_4 [label=<<B>RPTL2Projection</B>
 <br/>(lethe-rpt-l2-projection-3d)>,
 href="https://chaos-polymtl.github.io/lethe/doxygen/classRPTL2Projection.html",
 tooltip="RPTL2Projection"];
    }
 * @enddot
 */
